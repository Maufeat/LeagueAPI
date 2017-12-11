#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LoginDataPacket { /**/ 
    uint64_t timeUntilFirstWinOfDay;/**/
  };
  static void to_json(json& j, const LoginDataPacket& v) { 
    j["timeUntilFirstWinOfDay"] = v.timeUntilFirstWinOfDay;
  }
  static void from_json(const json& j, LoginDataPacket& v) { 
    v.timeUntilFirstWinOfDay = j.at("timeUntilFirstWinOfDay").get<uint64_t>(); 
  }
} 