#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeleteLolStoreV1OrderNotificationsById (const https::Info& _info_,
      const uint64_t& id /**/ )
  { 
    return { https::Do(_info_, "delete", "/lol-store/v1/order-notifications/"+to_string(id)+"?", { 
    }, { 
    }) };
  }
} 