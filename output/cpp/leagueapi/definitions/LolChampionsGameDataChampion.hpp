#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolChampionsGameDataChampionSkin.hpp>
#include <leagueapi/definitions/LolChampionsGameDataChampionSpell.hpp>

namespace leagueapi {
  struct LolChampionsGameDataChampion { /**/ 
    std::vector<LolChampionsGameDataChampionSpell> spells;/**/
    std::vector<std::string> roles;/**/
    std::string chooseVoPath;/**/
    std::string squarePortraitPath;/**/
    int32_t id;/**/
    std::string name;/**/
    LolChampionsGameDataChampionSpell passive;/**/
    std::string alias;/**/
    std::vector<LolChampionsGameDataChampionSkin> skins;/**/
    std::string banVoPath;/**/
    std::string stingerSfxPath;/**/
  };
  static void to_json(json& j, const LolChampionsGameDataChampion& v) { 
    j["spells"] = v.spells;
    j["roles"] = v.roles;
    j["chooseVoPath"] = v.chooseVoPath;
    j["squarePortraitPath"] = v.squarePortraitPath;
    j["id"] = v.id;
    j["name"] = v.name;
    j["passive"] = v.passive;
    j["alias"] = v.alias;
    j["skins"] = v.skins;
    j["banVoPath"] = v.banVoPath;
    j["stingerSfxPath"] = v.stingerSfxPath;
  }
  static void from_json(const json& j, LolChampionsGameDataChampion& v) { 
    v.spells = j.at("spells").get<std::vector<LolChampionsGameDataChampionSpell>>(); 
    v.roles = j.at("roles").get<std::vector<std::string>>(); 
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>(); 
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.passive = j.at("passive").get<LolChampionsGameDataChampionSpell>(); 
    v.alias = j.at("alias").get<std::string>(); 
    v.skins = j.at("skins").get<std::vector<LolChampionsGameDataChampionSkin>>(); 
    v.banVoPath = j.at("banVoPath").get<std::string>(); 
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>(); 
  }
} 