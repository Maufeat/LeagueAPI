#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PlayerMessagingNotificationResource { 
    int32_t status;
    std::string body;
    int32_t id;
    std::string title;
    std::string msgId; 
  };
  inline void to_json(json& j, const PlayerMessagingNotificationResource& v) {
    j["status"] = v.status; 
    j["body"] = v.body; 
    j["id"] = v.id; 
    j["title"] = v.title; 
    j["msgId"] = v.msgId; 
  }
  inline void from_json(const json& j, PlayerMessagingNotificationResource& v) {
    v.status = j.at("status").get<int32_t>(); 
    v.body = j.at("body").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.title = j.at("title").get<std::string>(); 
    v.msgId = j.at("msgId").get<std::string>(); 
  }
}