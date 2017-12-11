#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RemotingHelpFormat.hpp>

namespace leagueapi::op {
  /*Returns information on available functions and types*/
  static https::Result<json> Help (const https::Info& _info_ ,
      const std::optional<std::string>& target = std::nullopt /*Name of the function or type to describe*/,
      const std::optional<RemotingHelpFormat>& format = std::nullopt /*Format for returned information*/)
  { 
    return { https::Do(_info_, "post", "/Help?", { 
      { "target", https::to_string(target) },
      { "format", https::to_string(format) },
    }, { 
    },"") };
  }
} 