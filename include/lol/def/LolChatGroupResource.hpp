#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatGroupResource { 
    std::string name;
    int32_t priority;
    uint32_t id;
    bool collapsed;
    bool isMetaGroup; 
  };
  inline void to_json(json& j, const LolChatGroupResource& v) {
    j["name"] = v.name; 
    j["priority"] = v.priority; 
    j["id"] = v.id; 
    j["collapsed"] = v.collapsed; 
    j["isMetaGroup"] = v.isMetaGroup; 
  }
  inline void from_json(const json& j, LolChatGroupResource& v) {
    v.name = j.at("name").get<std::string>(); 
    v.priority = j.at("priority").get<int32_t>(); 
    v.id = j.at("id").get<uint32_t>(); 
    v.collapsed = j.at("collapsed").get<bool>(); 
    v.isMetaGroup = j.at("isMetaGroup").get<bool>(); 
  }
}