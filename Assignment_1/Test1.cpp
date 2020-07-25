/**
 * A demonstration test program for Gimatriya calculation.
 * 
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;

TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}
TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    /* Add more checks here */
}

TEST_CASE("Test 3") {
    string text = "Liwe az yf iuo vere do tye tomorrow";
    CHECK(find(text, "Live") == string("liwe"));
    CHECK(find(text, "lIve") == string("liwe"));
    CHECK(find(text, "liVe") == string("liwe"));
    CHECK(find(text, "live") == string("liwe"));
    CHECK(find(text, "LIVE") == string("liwe"));
    /* Add more checks here */
}
TEST_CASE("Test 4") {
    string text = "Learn az yf ioo vere do lywe forever";
    CHECK(find(text, "as") == string("az"));
    CHECK(find(text, "As") == string("az"));
    CHECK(find(text, "aS") == string("az"));
    CHECK(find(text, "AS") == string("az"));
    CHECK_THROWS_AS(find(text, "s"), std::exception);
    CHECK_THROWS_AS(find(text, "a"), std::exception);
    CHECK_THROWS_AS(find(text, "A"), std::exception);
    CHECK_THROWS_AS(find(text, "S"), std::exception);
    /* Add more checks here */
}
TEST_CASE("Test 5") {
    string text = "Learn az yf ioo vere do lywe forever";
    CHECK(find(text, "if") == string("az"));
    CHECK(find(text, "If") == string("az"));
    CHECK(find(text, "iF") == string("az"));
    CHECK(find(text, "IF") == string("az"));
    /* Add more checks here */
}
TEST_CASE("Test 6 : 1 or more letter replacements") {
    string text = "Eydher iuu ron dhe day ur the dai rons ioo";
    CHECK(find(text, "Either") == string("Eydher"));
    CHECK(find(text, "either") == string("Eydher"));
    CHECK(find(text, "EITHER") == string("Eydher"));
    CHECK(find(text, "eiTHer") == string("Eydher"));
    CHECK(find(text, "Eyther") == string("Eydher"));
    CHECK(find(text, "eidher") == string("Eydher"));
    CHECK(find(text, "EIDHER") == string("Eydher"));
    CHECK(find(text, "eiTHer") == string("Eydher"));
   CHECK_THROWS_AS(find(text, "eithers"), std::exception); 
    CHECK(find(text, "You") == string("iuu"));
    CHECK(find(text, "yOu") == string("iuu"));
    CHECK(find(text, "yoU") == string("iuu"));
    CHECK(find(text, "YOU") == string("iuu"));
    CHECK(find(text, "iou") == string("iuu"));
    CHECK(find(text, "ioo") == string("iuu"));
    CHECK(find(text, "iuu") == string("iuu"));
    CHECK(find(text, "iuo") == string("iuu"));
    CHECK_THROWS_AS(find(text, "yoy"), std::exception);
    CHECK(find(text, "RUN") == string("ron"));
    CHECK(find(text, "rUn") == string("ron"));
    CHECK(find(text, "ruN") == string("ron"));
    CHECK(find(text, "RUN") == string("ron"));
    CHECK_THROWS_AS(find(text, "runnn"), std::exception);
    CHECK(find(text, "The") == string("dhe"));
    CHECK(find(text, "tHe") == string("dhe"));
    CHECK(find(text, "THE") == string("dhe"));
    CHECK(find(text, "thE") == string("dhe"));
    CHECK_THROWS_AS(find(text, "th"), std::exception);
    CHECK(find(text, "tay") == string("day"));
    CHECK(find(text, "tai") == string("day"));
    CHECK(find(text, "dai") == string("day"));
    CHECK(find(text, "TAI") == string("day"));
    CHECK(find(text, "DAI") == string("day"));
    CHECK(find(text, "TAY") == string("day"));
    CHECK_THROWS_AS(find(text, "dayz"), std::exception);
}
TEST_CASE("Test 7") {
    string text = "ur the dai rons ioo";
   CHECK(find(text, "Or") == string("ur"));
    CHECK(find(text, "OR") == string("ur"));
    CHECK(find(text, "oR") == string("ur"));
    CHECK(find(text, "UR") == string("ur"));
    CHECK(find(text, "Ur") == string("ur"));
    CHECK(find(text, "uR") == string("ur"));
    CHECK_THROWS_AS(find(text, "u"), std::exception);
    CHECK(find(text, "THE") == string("the"));
    CHECK(find(text, "DHE") == string("the"));
    CHECK(find(text, "Dhe") == string("the"));
    CHECK(find(text, "dHe") == string("the"));
    CHECK(find(text, "dhE") == string("the"));
    CHECK(find(text, "dhe") == string("the"));
    CHECK_THROWS_AS(find(text, "t"), std::exception);
    CHECK(find(text, "THE") == string("the"));
    CHECK(find(text, "DHE") == string("the"));
    CHECK(find(text, "Dhe") == string("the"));
    CHECK(find(text, "dHe") == string("the"));
    CHECK(find(text, "dhE") == string("the"));
    CHECK(find(text, "dhe") == string("the"));
    CHECK_THROWS_AS(find(text, "t"), std::exception);
    CHECK(find(text, "day") == string("dai"));
    CHECK(find(text, "Day") == string("dai"));
    CHECK(find(text, "dAy") == string("dai"));
    CHECK(find(text, "daY") == string("dai"));
    CHECK(find(text, "DAY") == string("dai"));
    CHECK(find(text, "tai") == string("dai"));
    CHECK(find(text, "tay") == string("dai"));
    CHECK(find(text, "TaY") == string("dai"));
    CHECK(find(text, "TAY") == string("dai"));
    CHECK_THROWS_AS(find(text, "da"), std::exception);
     CHECK(find(text, "RUNS") == string("rons"));
    CHECK(find(text, "RUNZ") == string("rons"));
    CHECK(find(text, "RONZ") == string("rons"));
    CHECK(find(text, "ronz") == string("rons"));
    CHECK(find(text, "runz") == string("rons"));
    CHECK(find(text, "rons") == string("rons"));
    CHECK_THROWS_AS(find(text, "run"), std::exception);
    CHECK_THROWS_AS(find(text, "ron"), std::exception);
}
TEST_CASE("Test 8 : legal sentence checking combinations of replacements") {
    string text = "Two roads diverged in a yellow wood and sorry i could not travel both";
    CHECK(find(text, "dwo") == string("Two"));
    CHECK(find(text, "Dwo") == string("Two"));
    CHECK(find(text, "TWO") == string("Two"));
    CHECK(find(text, "dvo") == string("Two"));
    CHECK(find(text, "dvu") == string("Two"));
    CHECK(find(text, "DVU") == string("Two"));
    CHECK(find(text, "Tvo") == string("Two"));
    CHECK(find(text, "Tvu") == string("Two"));
    CHECK(find(text, "TVU") == string("Two"));
    CHECK(find(text, "ruads") == string("roads"));
    CHECK(find(text, "roadz") == string("roads"));
    CHECK(find(text, "ruadz") == string("roads"));
    CHECK(find(text, "RUADZ") == string("roads"));
    CHECK(find(text, "rUadZ") == string("roads"));
    CHECK(find(text, "ruadZ") == string("roads"));
    CHECK(find(text, "rUadz") == string("roads"));
    
    CHECK(find(text, "tiverged") == string("diverged"));
    CHECK(find(text, "tiverget") == string("diverged"));
    CHECK(find(text, "TIVERGED") == string("diverged"));
    CHECK(find(text, "diverget") == string("diverged"));
    CHECK(find(text, "diverjed") == string("diverged"));
    CHECK(find(text, "diverjet") == string("diverged"));
    CHECK(find(text, "tiverjet") == string("diverged"));
    CHECK(find(text, "diwerged") == string("diverged"));
    CHECK(find(text, "tiwerged") == string("diverged"));
    CHECK(find(text, "diwerjed") == string("diverged"));
    CHECK(find(text, "diwerget") == string("diverged"));
    CHECK(find(text, "tiwerjet") == string("diverged"));
    CHECK_THROWS_AS(find(text, "diverge"), std::exception);

    
    
}

