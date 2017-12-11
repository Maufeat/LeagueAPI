#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLeaguesSimpleMessage.hpp>"

namespace leagueapi {
  struct LolLeaguesLeaguesLoginDataPacket { /**/ 
    std::vector<LolLeaguesSimpleMessage> simpleMessages;/**/
  };
  static void to_json(json& j, const LolLeaguesLeaguesLoginDataPacket& v) { 
    j["simpleMessages"] = v.simpleMessages;
  }
  static void from_json(const json& j, LolLeaguesLeaguesLoginDataPacket& v) { 
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolLeaguesSimpleMessage>>(); 
  }
} 