#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLeaguesSimpleMessage { 
    std::string msgId;
    std::vector<std::string> params;
    std::string type;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolLeaguesSimpleMessage& v) {
    j["msgId"] = v.msgId; 
    j["params"] = v.params; 
    j["type"] = v.type; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolLeaguesSimpleMessage& v) {
    v.msgId = j.at("msgId").get<std::string>(); 
    v.params = j.at("params").get<std::vector<std::string>>(); 
    v.type = j.at("type").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}