#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolSimpleDialogMessagesMessage { 
    std::string type;
    int64_t id;
    json body; 
  };
  void to_json(json& j, const LolSimpleDialogMessagesMessage& v) {
  j["type"] = v.type; 
  j["id"] = v.id; 
  j["body"] = v.body; 
  }
  void from_json(const json& j, LolSimpleDialogMessagesMessage& v) {
  v.type = j.at("type").get<std::string>(); 
  v.id = j.at("id").get<int64_t>(); 
  v.body = j.at("body").get<json>(); 
  }
}