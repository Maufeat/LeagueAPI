#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolSimpleDialogMessagesLocalMessageRequest { /**/ 
    std::vector<std::string> msgBody;/**/
    std::string msgType;/**/
  };
  static void to_json(json& j, const LolSimpleDialogMessagesLocalMessageRequest& v) { 
    j["msgBody"] = v.msgBody;
    j["msgType"] = v.msgType;
  }
  static void from_json(const json& j, LolSimpleDialogMessagesLocalMessageRequest& v) { 
    v.msgBody = j.at("msgBody").get<std::vector<std::string>>(); 
    v.msgType = j.at("msgType").get<std::string>(); 
  }
} 