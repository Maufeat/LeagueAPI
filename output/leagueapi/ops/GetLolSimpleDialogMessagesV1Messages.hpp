#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolSimpleDialogMessagesMessage.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolSimpleDialogMessagesMessage>> GetLolSimpleDialogMessagesV1Messages (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-simple-dialog-messages/v1/messages?", { 
    }, { 
    },"") };
  }
} 