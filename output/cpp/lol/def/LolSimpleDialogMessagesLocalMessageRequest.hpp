#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolSimpleDialogMessagesLocalMessageRequest { 
    std::vector<std::string> msgBody;
    std::string msgType; 
  };
  void to_json(json& j, const LolSimpleDialogMessagesLocalMessageRequest& v) {
  j["msgBody"] = v.msgBody; 
  j["msgType"] = v.msgType; 
  }
  void from_json(const json& j, LolSimpleDialogMessagesLocalMessageRequest& v) {
  v.msgBody = j.at("msgBody").get<std::vector<std::string>>(); 
  v.msgType = j.at("msgType").get<std::string>(); 
  }
}