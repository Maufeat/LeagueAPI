#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolSimpleDialogMessagesMessage { 
    json body;
    std::string type;
    int64_t id; 
  };
  void to_json(json& j, const LolSimpleDialogMessagesMessage& v) {
    j["body"] = v.body; 
    j["type"] = v.type; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolSimpleDialogMessagesMessage& v) {
    v.body = j.at("body").get<json>(); 
    v.type = j.at("type").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
  }
}