#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolStoreOrderNotificationResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolStoreOrderNotificationResource>> GetLolStoreV1OrderNotifications (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-store/v1/order-notifications?", { 
    }, { 
    }) };
  }
} 