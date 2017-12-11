#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PlayerMessagingNotificationResource { /**/ 
    std::string title;/**/
    int32_t status;/**/
    std::string msgId;/**/
    int32_t id;/**/
    std::string body;/**/
  };
  static void to_json(json& j, const PlayerMessagingNotificationResource& v) { 
    j["title"] = v.title;
    j["status"] = v.status;
    j["msgId"] = v.msgId;
    j["id"] = v.id;
    j["body"] = v.body;
  }
  static void from_json(const json& j, PlayerMessagingNotificationResource& v) { 
    v.title = j.at("title").get<std::string>(); 
    v.status = j.at("status").get<int32_t>(); 
    v.msgId = j.at("msgId").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.body = j.at("body").get<std::string>(); 
  }
} 