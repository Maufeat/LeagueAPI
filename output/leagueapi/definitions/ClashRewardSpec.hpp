#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct ClashRewardSpec { /**/ 
    std::string level;/**/
    std::string quantity;/**/
    std::string tier;/**/
    std::string seasonId;/**/
    std::string bracket;/**/
    std::string name;/**/
    std::string gem;/**/
    std::string pedestal;/**/
    std::string theme;/**/
    std::string cup;/**/
  };
  static void to_json(json& j, const ClashRewardSpec& v) { 
    j["level"] = v.level;
    j["quantity"] = v.quantity;
    j["tier"] = v.tier;
    j["seasonId"] = v.seasonId;
    j["bracket"] = v.bracket;
    j["name"] = v.name;
    j["gem"] = v.gem;
    j["pedestal"] = v.pedestal;
    j["theme"] = v.theme;
    j["cup"] = v.cup;
  }
  static void from_json(const json& j, ClashRewardSpec& v) { 
    v.level = j.at("level").get<std::string>(); 
    v.quantity = j.at("quantity").get<std::string>(); 
    v.tier = j.at("tier").get<std::string>(); 
    v.seasonId = j.at("seasonId").get<std::string>(); 
    v.bracket = j.at("bracket").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.gem = j.at("gem").get<std::string>(); 
    v.pedestal = j.at("pedestal").get<std::string>(); 
    v.theme = j.at("theme").get<std::string>(); 
    v.cup = j.at("cup").get<std::string>(); 
  }
} 