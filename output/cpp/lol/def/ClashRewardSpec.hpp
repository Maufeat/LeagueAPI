#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct ClashRewardSpec { 
    std::string pedestal;
    std::string seasonId;
    std::string theme;
    std::string gem;
    std::string quantity;
    std::string tier;
    std::string cup;
    std::string name;
    std::string bracket;
    std::string level; 
  };
  void to_json(json& j, const ClashRewardSpec& v) {
    j["pedestal"] = v.pedestal; 
    j["seasonId"] = v.seasonId; 
    j["theme"] = v.theme; 
    j["gem"] = v.gem; 
    j["quantity"] = v.quantity; 
    j["tier"] = v.tier; 
    j["cup"] = v.cup; 
    j["name"] = v.name; 
    j["bracket"] = v.bracket; 
    j["level"] = v.level; 
  }
  void from_json(const json& j, ClashRewardSpec& v) {
    v.pedestal = j.at("pedestal").get<std::string>(); 
    v.seasonId = j.at("seasonId").get<std::string>(); 
    v.theme = j.at("theme").get<std::string>(); 
    v.gem = j.at("gem").get<std::string>(); 
    v.quantity = j.at("quantity").get<std::string>(); 
    v.tier = j.at("tier").get<std::string>(); 
    v.cup = j.at("cup").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.bracket = j.at("bracket").get<std::string>(); 
    v.level = j.at("level").get<std::string>(); 
  }
}