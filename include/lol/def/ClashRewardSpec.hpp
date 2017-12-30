#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ClashRewardSpec { 
    std::string name;
    std::string gem;
    std::string theme;
    std::string quantity;
    std::string pedestal;
    std::string tier;
    std::string seasonId;
    std::string cup;
    std::string bracket;
    std::string level; 
  };
  inline void to_json(json& j, const ClashRewardSpec& v) {
    j["name"] = v.name; 
    j["gem"] = v.gem; 
    j["theme"] = v.theme; 
    j["quantity"] = v.quantity; 
    j["pedestal"] = v.pedestal; 
    j["tier"] = v.tier; 
    j["seasonId"] = v.seasonId; 
    j["cup"] = v.cup; 
    j["bracket"] = v.bracket; 
    j["level"] = v.level; 
  }
  inline void from_json(const json& j, ClashRewardSpec& v) {
    v.name = j.at("name").get<std::string>(); 
    v.gem = j.at("gem").get<std::string>(); 
    v.theme = j.at("theme").get<std::string>(); 
    v.quantity = j.at("quantity").get<std::string>(); 
    v.pedestal = j.at("pedestal").get<std::string>(); 
    v.tier = j.at("tier").get<std::string>(); 
    v.seasonId = j.at("seasonId").get<std::string>(); 
    v.cup = j.at("cup").get<std::string>(); 
    v.bracket = j.at("bracket").get<std::string>(); 
    v.level = j.at("level").get<std::string>(); 
  }
}