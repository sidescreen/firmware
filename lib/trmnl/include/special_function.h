#include <Arduino.h>

enum SPECIAL_FUNCTION
{
  SF_NONE,
  SF_IDENTIFY,
  SF_SLEEP,
  SF_ADD_WIFI,
  SF_RESTART_PLAYLIST,
  SF_REWIND,
  SF_SEND_TO_ME,
};

SPECIAL_FUNCTION parseSpecialFunction(String &special_function_str);