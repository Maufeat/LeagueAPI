#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSimpleDialogMessagesMessage { 
    int64_t id;
    json body;
    std::string type; 
  };
  inline void to_json(json& j, const LolSimpleDialogMessagesMessage& v) {
    j["id"] = v.id; 
    j["body"] = v.body; 
    j["type"] = v.type; 
  }
  inline void from_json(const json& j, LolSimpleDialogMessagesMessage& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.body = j.at("body").get<json>(); 
    v.type = j.at("type").get<std::string>(); 
  }
}