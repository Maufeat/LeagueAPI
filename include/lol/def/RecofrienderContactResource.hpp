#pragma once
#include "../base_def.hpp" 
#include "RecofrienderFriendState.hpp"
namespace lol {
  struct RecofrienderContactResource { 
    uint64_t accountId;
    uint64_t summonerId;
    std::string action;
    std::string source;
    int64_t recommendScore;
    std::string displayState;
    std::string name;
    std::string imageUrl;
    RecofrienderFriendState friendState; 
  };
  inline void to_json(json& j, const RecofrienderContactResource& v) {
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
    j["action"] = v.action; 
    j["source"] = v.source; 
    j["recommendScore"] = v.recommendScore; 
    j["displayState"] = v.displayState; 
    j["name"] = v.name; 
    j["imageUrl"] = v.imageUrl; 
    j["friendState"] = v.friendState; 
  }
  inline void from_json(const json& j, RecofrienderContactResource& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.action = j.at("action").get<std::string>(); 
    v.source = j.at("source").get<std::string>(); 
    v.recommendScore = j.at("recommendScore").get<int64_t>(); 
    v.displayState = j.at("displayState").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.imageUrl = j.at("imageUrl").get<std::string>(); 
    v.friendState = j.at("friendState").get<RecofrienderFriendState>(); 
  }
}