#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PlayerMessagingNotificationResource { 
    int32_t id;
    std::string msgId;
    std::string body;
    int32_t status;
    std::string title; 
  };
  inline void to_json(json& j, const PlayerMessagingNotificationResource& v) {
    j["id"] = v.id; 
    j["msgId"] = v.msgId; 
    j["body"] = v.body; 
    j["status"] = v.status; 
    j["title"] = v.title; 
  }
  inline void from_json(const json& j, PlayerMessagingNotificationResource& v) {
    v.id = j.at("id").get<int32_t>(); 
    v.msgId = j.at("msgId").get<std::string>(); 
    v.body = j.at("body").get<std::string>(); 
    v.status = j.at("status").get<int32_t>(); 
    v.title = j.at("title").get<std::string>(); 
  }
}