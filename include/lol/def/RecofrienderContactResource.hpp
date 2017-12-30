#pragma once
#include "../base_def.hpp" 
#include "RecofrienderFriendState.hpp"
namespace lol {
  struct RecofrienderContactResource { 
    std::string name;
    int64_t recommendScore;
    std::string action;
    RecofrienderFriendState friendState;
    uint64_t accountId;
    std::string imageUrl;
    uint64_t summonerId;
    std::string source;
    std::string displayState; 
  };
  inline void to_json(json& j, const RecofrienderContactResource& v) {
    j["name"] = v.name; 
    j["recommendScore"] = v.recommendScore; 
    j["action"] = v.action; 
    j["friendState"] = v.friendState; 
    j["accountId"] = v.accountId; 
    j["imageUrl"] = v.imageUrl; 
    j["summonerId"] = v.summonerId; 
    j["source"] = v.source; 
    j["displayState"] = v.displayState; 
  }
  inline void from_json(const json& j, RecofrienderContactResource& v) {
    v.name = j.at("name").get<std::string>(); 
    v.recommendScore = j.at("recommendScore").get<int64_t>(); 
    v.action = j.at("action").get<std::string>(); 
    v.friendState = j.at("friendState").get<RecofrienderFriendState>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.imageUrl = j.at("imageUrl").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.source = j.at("source").get<std::string>(); 
    v.displayState = j.at("displayState").get<std::string>(); 
  }
}