#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/TickerMessage.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<TickerMessage>> GetLolServiceStatusV1TickerMessages (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-service-status/v1/ticker-messages?", { 
    }, { 
    },"") };
  }
} 