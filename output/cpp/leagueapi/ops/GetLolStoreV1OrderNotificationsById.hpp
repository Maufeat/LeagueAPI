#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolStoreOrderNotificationResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolStoreOrderNotificationResource> GetLolStoreV1OrderNotificationsById (const https::Info& _info_,
      const uint64_t& id /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-store/v1/order-notifications/"+to_string(id)+"?", { 
    }, { 
    }) };
  }
} 