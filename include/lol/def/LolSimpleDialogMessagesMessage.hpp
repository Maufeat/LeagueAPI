#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSimpleDialogMessagesMessage { 
    int64_t id;
    std::string type;
    json body; 
  };
  inline void to_json(json& j, const LolSimpleDialogMessagesMessage& v) {
    j["id"] = v.id; 
    j["type"] = v.type; 
    j["body"] = v.body; 
  }
  inline void from_json(const json& j, LolSimpleDialogMessagesMessage& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.type = j.at("type").get<std::string>(); 
    v.body = j.at("body").get<json>(); 
  }
}