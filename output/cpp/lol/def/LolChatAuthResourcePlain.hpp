#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChatAuthResourcePlain { 
    std::string password;
    std::string username;
    json gasToken; 
  };
  void to_json(json& j, const LolChatAuthResourcePlain& v) {
    j["password"] = v.password; 
    j["username"] = v.username; 
    j["gasToken"] = v.gasToken; 
  }
  void from_json(const json& j, LolChatAuthResourcePlain& v) {
    v.password = j.at("password").get<std::string>(); 
    v.username = j.at("username").get<std::string>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
  }
}