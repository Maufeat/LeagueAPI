#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PlayerMessagingNotificationResource { 
    int32_t id;
    std::string msgId;
    std::string title;
    std::string body;
    int32_t status; 
  };
  inline void to_json(json& j, const PlayerMessagingNotificationResource& v) {
    j["id"] = v.id; 
    j["msgId"] = v.msgId; 
    j["title"] = v.title; 
    j["body"] = v.body; 
    j["status"] = v.status; 
  }
  inline void from_json(const json& j, PlayerMessagingNotificationResource& v) {
    v.id = j.at("id").get<int32_t>(); 
    v.msgId = j.at("msgId").get<std::string>(); 
    v.title = j.at("title").get<std::string>(); 
    v.body = j.at("body").get<std::string>(); 
    v.status = j.at("status").get<int32_t>(); 
  }
}