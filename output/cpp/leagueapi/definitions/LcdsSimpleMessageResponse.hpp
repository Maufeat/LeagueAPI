#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LcdsSimpleMessageResponse { /**/ 
    std::string command;/**/
    std::string msgId;/**/
    uint64_t accountId;/**/
  };
  static void to_json(json& j, const LcdsSimpleMessageResponse& v) { 
    j["command"] = v.command;
    j["msgId"] = v.msgId;
    j["accountId"] = v.accountId;
  }
  static void from_json(const json& j, LcdsSimpleMessageResponse& v) { 
    v.command = j.at("command").get<std::string>(); 
    v.msgId = j.at("msgId").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
} 