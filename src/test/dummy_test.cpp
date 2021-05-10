#include "stdafx.h"

TEST_CASE("blah") {
    REQUIRE(true);
    SECTION("blahblah") {
        REQUIRE(1==1);
    }
}