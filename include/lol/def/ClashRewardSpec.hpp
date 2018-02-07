#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ClashRewardSpec { 
    std::string pedestal;
    std::string cup;
    std::string gem;
    std::string tier;
    std::string bracket;
    std::string theme;
    std::string level;
    std::string seasonId;
    std::string name;
    std::string quantity; 
  };
  inline void to_json(json& j, const ClashRewardSpec& v) {
    j["pedestal"] = v.pedestal; 
    j["cup"] = v.cup; 
    j["gem"] = v.gem; 
    j["tier"] = v.tier; 
    j["bracket"] = v.bracket; 
    j["theme"] = v.theme; 
    j["level"] = v.level; 
    j["seasonId"] = v.seasonId; 
    j["name"] = v.name; 
    j["quantity"] = v.quantity; 
  }
  inline void from_json(const json& j, ClashRewardSpec& v) {
    v.pedestal = j.at("pedestal").get<std::string>(); 
    v.cup = j.at("cup").get<std::string>(); 
    v.gem = j.at("gem").get<std::string>(); 
    v.tier = j.at("tier").get<std::string>(); 
    v.bracket = j.at("bracket").get<std::string>(); 
    v.theme = j.at("theme").get<std::string>(); 
    v.level = j.at("level").get<std::string>(); 
    v.seasonId = j.at("seasonId").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.quantity = j.at("quantity").get<std::string>(); 
  }
}