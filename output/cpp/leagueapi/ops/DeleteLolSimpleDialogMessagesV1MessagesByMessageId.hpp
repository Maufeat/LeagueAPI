#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeleteLolSimpleDialogMessagesV1MessagesByMessageId (const https::Info& _info_,
      const int64_t& messageId /**/ )
  { 
    return { https::Do(_info_, "delete", "/lol-simple-dialog-messages/v1/messages/"+to_string(messageId)+"?", { 
    }, { 
    }) };
  }
} 