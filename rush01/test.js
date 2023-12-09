//const str = "423423312 133353252 325324231 241432422".split(" ")
//const str = "4134223 2321442 2323214 3221452".split(" ")
//const str = "244212 222351 231322 235331".split(" ")
//const str = "33221 23132 32212 12352".split(" ")
const str = "1322 3122 1322 3212".split(" ");

//const str = "443122 132322 343221 222313".split(" ");
const skyscraper_vals = [...Array(str[0].length).keys()].map(x => x+1);

//get all possible combinations given an array of integers
//no clue what this does
function permutator(inputArr) {
  var results = [];

  function permute(arr, memo) {
    var cur, memo = memo || [];

    for (var i = 0; i < arr.length; i++) {
      cur = arr.splice(i, 1);
      if (arr.length === 0) {
        results.push(memo.concat(cur));
      }
      permute(arr.slice(), memo.concat(cur));
      arr.splice(i, 0, cur[0]);
    }

    return results;
  }

  return permute(inputArr);
}

//checks a sequence of numbers and sees if its valid based on the left and right values
//can be used for both rows and columns
function is_valid(x, y, arr) {
    let tallest_skyscraper_so_far = 0;
    let count_from_left = 0;
	arr.forEach((val, i) => {
        if(arr[i] > tallest_skyscraper_so_far) {
            count_from_left  += 1
            tallest_skyscraper_so_far = arr[i];
        }
	});

	let count_from_right = 0;
	tallest_skyscraper_so_far = 0;
	arr.forEach((val, i) => {
		const index = arr.length - 1 - i;
        if(arr[index] > tallest_skyscraper_so_far) {
            count_from_right += 1
            tallest_skyscraper_so_far = arr[index];
        }
	});

	if(arr.length != skyscraper_vals.length)
	{
		if(count_from_left > x) {
			return false;
		}
		return true;
	}
    return count_from_left == x && count_from_right == y
}

//use for the keys of skyscraper edges
function all_possible_2digits(vals) {
	const range = [...vals.keys()].map(x => x+1);

	ls = []
	for(const i of range) {
		for(const j of range) {
			ls.push([i, j])	
		}
	}
	return ls;
}

const possible_2digits = all_possible_2digits(skyscraper_vals);

//for a length generate all possible arrays
const possible_arrays = permutator(skyscraper_vals);

//goes through all possible ends (left/right or top/bottom) and gets what all sets of arrays are possible
const index_map = possible_2digits.reduce((acc, curr) => {
    acc[`${curr[0]}-${curr[1]}`] = possible_arrays.filter(arr => is_valid(curr[0], curr[1], arr));
    return acc
}, {});

//does some logic to resolve the edges to keys and also fetches the reverse
function get_from_index_map(x, y) {
    const key = (x, y) => `${x}-${y}`
    const val = index_map[key(x, y)]
    if(val) return val
    
    const split_val = index_map[key(y, x)]
    if(split_val) return split_val.map(x => x.slice().reverse())
    
    return;
}

top = str[0].split("");
down = str[1].split("");
left = str[2].split("");
right = str[3].split("");

//Checks column by column of the matrix
//Takes it through is_valid/checks if all elements are unique
function is_matrix_valid(matrix) {
	const indexes = [...Array(skyscraper_vals.length).keys()];
	return indexes.every((col) =>{
		const column = matrix.map(row => row[col])
		const isUnique = new Set(column).size === column.length;
		if(!isUnique) return 0;

		return is_valid(top[col], down[col], column);
	})
}

let i = 0;
function branch_out(curr_state, level) {
		//stop once it reach the number of elements height
		i+=1;
        if(level == skyscraper_vals.length) {
             if(is_matrix_valid(curr_state)) {
                 console.log(curr_state)    
             }
			return;
        }

	if(!is_matrix_valid(curr_state)) {
		return;
	}
        const valid_inputs = get_from_index_map(left[level], right[level])
        if(!valid_inputs) {
			console.log("shouldnt be herE");
			return;
		}

        for(const input of valid_inputs) {
            branch_out([...curr_state, input], level + 1)
        }
}



branch_out([], 0)
console.log(i);
//console.log(index_map)


