#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct GameClientChatMessageResource { 
    std::string body;
    std::string fromSummonerName; 
  };
  void to_json(json& j, const GameClientChatMessageResource& v) {
  j["body"] = v.body; 
  j["fromSummonerName"] = v.fromSummonerName; 
  }
  void from_json(const json& j, GameClientChatMessageResource& v) {
  v.body = j.at("body").get<std::string>(); 
  v.fromSummonerName = j.at("fromSummonerName").get<std::string>(); 
  }
}