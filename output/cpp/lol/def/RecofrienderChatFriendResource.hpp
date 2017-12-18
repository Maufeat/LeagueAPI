#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RecofrienderChatFriendResource { 
    std::string name;
    uint64_t id; 
  };
  inline void to_json(json& j, const RecofrienderChatFriendResource& v) {
    j["name"] = v.name; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, RecofrienderChatFriendResource& v) {
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
  }
}