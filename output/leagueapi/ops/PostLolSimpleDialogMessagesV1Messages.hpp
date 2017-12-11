#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolSimpleDialogMessagesLocalMessageRequest.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolSimpleDialogMessagesV1Messages (const https::Info& _info_,
      const LolSimpleDialogMessagesLocalMessageRequest& messageRequest /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-simple-dialog-messages/v1/messages?", { 
    }, { 
    },messageRequest) };
  }
} 