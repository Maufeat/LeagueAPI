#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyPartyChatDto { 
    std::string jid; 
  };
  inline void to_json(json& j, const LolLobbyPartyChatDto& v) {
    j["jid"] = v.jid; 
  }
  inline void from_json(const json& j, LolLobbyPartyChatDto& v) {
    v.jid = j.at("jid").get<std::string>(); 
  }
}