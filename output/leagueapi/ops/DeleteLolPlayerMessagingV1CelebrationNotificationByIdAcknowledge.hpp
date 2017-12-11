#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeleteLolPlayerMessagingV1CelebrationNotificationByIdAcknowledge (const https::Info& _info_,
      const uint32_t& id /**/ )
  { 
    return { https::Do(_info_, "delete", "/lol-player-messaging/v1/celebration/notification/"+to_string(id)+"/acknowledge?", { 
    }, { 
    },"") };
  }
} 