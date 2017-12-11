#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/PatcherNotificationId.hpp>"

namespace leagueapi {
  struct PatcherNotification { /**/ 
    PatcherNotificationId notificationId;/**/
    std::string id;/**/
  };
  static void to_json(json& j, const PatcherNotification& v) { 
    j["notificationId"] = v.notificationId;
    j["id"] = v.id;
  }
  static void from_json(const json& j, PatcherNotification& v) { 
    v.notificationId = j.at("notificationId").get<PatcherNotificationId>(); 
    v.id = j.at("id").get<std::string>(); 
  }
} 