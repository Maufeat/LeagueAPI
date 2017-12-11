#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RemotingSerializedFormat.hpp>

namespace leagueapi::op {
  /*Controls the console output format*/
  static https::Result<json> WebSocketFormat (const https::Info& _info_ ,
      const std::optional<RemotingSerializedFormat>& format = std::nullopt /*Output format to switch to*/)
  { 
    return { https::Do(_info_, "post", "/WebSocketFormat?", { 
      { "format", to_string(format) },
    }, { 
    }) };
  }
} 