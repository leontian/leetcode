# include "Solution461.hpp"

int Solution461::hammingDistance(int x, int y) {
		// XOR: 1 if different
		int i = x ^ y;
		// now count number of 1
		i = i - ((i >> 1) & 0x55555555);
		i = (i & 0x33333333) + ((i >> 2) & 0x33333333);
		return (((i + (i >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
}
