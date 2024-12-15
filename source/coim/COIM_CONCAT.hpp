#pragma once
#define __COIM_CONCAT_IMPL(__LHS__,__RHS__) __LHS__##__RHS__
#define COIM_CONCAT(__LHS__,__RHS__) __COIM_CONCAT_IMPL(__LHS__,__RHS__)
