#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include "index.h"

SCoordinates matrix(std::vector<std::vector<int>> &field) {
	SCoordinates res = {
			0,
			0
	};

	bool found = false;

	for (int i = 0; i < field.size(); i++) {
		if (found) {
			break;
		}
		for (int j = 0; j < field[i].size(); j++) {
			if (field[i][j] == 1) {
				res.x = j;
				res.y = i;
				found = true;
				break;
			}
		}
	}

	return res;
}
