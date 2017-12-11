#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolCollectionsPlayerNotification { /**/ 
    std::string source;/**/
    bool critical;/**/
    std::string backgroundUrl;/**/
    std::string iconUrl;/**/
    std::map<std::string, std::string> data;/**/
    std::string type;/**/
    std::string detailKey;/**/
    std::string titleKey;/**/
    std::string state;/**/
    uint64_t id;/**/
  };
  static void to_json(json& j, const LolCollectionsPlayerNotification& v) { 
    j["source"] = v.source;
    j["critical"] = v.critical;
    j["backgroundUrl"] = v.backgroundUrl;
    j["iconUrl"] = v.iconUrl;
    j["data"] = v.data;
    j["type"] = v.type;
    j["detailKey"] = v.detailKey;
    j["titleKey"] = v.titleKey;
    j["state"] = v.state;
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolCollectionsPlayerNotification& v) { 
    v.source = j.at("source").get<std::string>(); 
    v.critical = j.at("critical").get<bool>(); 
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>(); 
    v.iconUrl = j.at("iconUrl").get<std::string>(); 
    v.data = j.at("data").get<std::map<std::string, std::string>>(); 
    v.type = j.at("type").get<std::string>(); 
    v.detailKey = j.at("detailKey").get<std::string>(); 
    v.titleKey = j.at("titleKey").get<std::string>(); 
    v.state = j.at("state").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
  }
} 