#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolSimpleDialogMessagesSimpleMessage.hpp>

namespace leagueapi {
  struct LolSimpleDialogMessagesLoginDataPacket { /**/ 
    std::vector<LolSimpleDialogMessagesSimpleMessage> simpleMessages;/**/
  };
  static void to_json(json& j, const LolSimpleDialogMessagesLoginDataPacket& v) { 
    j["simpleMessages"] = v.simpleMessages;
  }
  static void from_json(const json& j, LolSimpleDialogMessagesLoginDataPacket& v) { 
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolSimpleDialogMessagesSimpleMessage>>(); 
  }
} 