#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolSimpleDialogMessagesLocalMessageRequest { 
    std::string msgType;
    std::vector<std::string> msgBody; 
  };
  inline void to_json(json& j, const LolSimpleDialogMessagesLocalMessageRequest& v) {
    j["msgType"] = v.msgType; 
    j["msgBody"] = v.msgBody; 
  }
  inline void from_json(const json& j, LolSimpleDialogMessagesLocalMessageRequest& v) {
    v.msgType = j.at("msgType").get<std::string>(); 
    v.msgBody = j.at("msgBody").get<std::vector<std::string>>(); 
  }
}