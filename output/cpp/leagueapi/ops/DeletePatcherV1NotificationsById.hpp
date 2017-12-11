#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeletePatcherV1NotificationsById (const https::Info& _info_,
      const std::string& id /**/ )
  { 
    return { https::Do(_info_, "delete", "/patcher/v1/notifications/"+to_string(id)+"?", { 
    }, { 
    }) };
  }
} 