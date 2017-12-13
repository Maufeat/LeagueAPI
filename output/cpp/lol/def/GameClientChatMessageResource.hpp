#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct GameClientChatMessageResource { 
    std::string fromSummonerName;
    std::string body; 
  };
  void to_json(json& j, const GameClientChatMessageResource& v) {
  j["fromSummonerName"] = v.fromSummonerName; 
  j["body"] = v.body; 
  }
  void from_json(const json& j, GameClientChatMessageResource& v) {
  v.fromSummonerName = j.at("fromSummonerName").get<std::string>(); 
  v.body = j.at("body").get<std::string>(); 
  }
}