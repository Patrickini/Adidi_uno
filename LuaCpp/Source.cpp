#include <iostream>
#include "lua.hpp"

int main(int argc, char *argv[]) {
	int width, height;
	lua_State* L = luaL_newstate();
	luaL_openlibs(L);
	luaopen_base(L);
	luaopen_string(L);
	luaopen_math(L);


	
	double f(lua_state*, double x, double y) {

	}
	if (luaL_loadfile(L, "lua.lua") || lua_pcall(L, 0, 0, 0)) {
		printf("cannot run config file: %s", lua_tostring(L, ));
	}
	lua_getglobal(L, "width");
	lua_getglobal(L, "height");


}