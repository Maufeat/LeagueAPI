#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PlayerMessagingNotificationResource { 
    std::string body;
    int32_t status;
    std::string msgId;
    std::string title;
    int32_t id; 
  };
  void to_json(json& j, const PlayerMessagingNotificationResource& v) {
    j["body"] = v.body; 
    j["status"] = v.status; 
    j["msgId"] = v.msgId; 
    j["title"] = v.title; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, PlayerMessagingNotificationResource& v) {
    v.body = j.at("body").get<std::string>(); 
    v.status = j.at("status").get<int32_t>(); 
    v.msgId = j.at("msgId").get<std::string>(); 
    v.title = j.at("title").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
  }
}