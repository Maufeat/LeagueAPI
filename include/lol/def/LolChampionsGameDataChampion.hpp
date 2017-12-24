#pragma once
#include "../base_def.hpp" 
#include "LolChampionsGameDataChampionSkin.hpp"
#include "LolChampionsGameDataChampionSpell.hpp"
namespace lol {
  struct LolChampionsGameDataChampion { 
    std::string stingerSfxPath;
    std::string squarePortraitPath;
    std::vector<std::string> roles;
    std::vector<LolChampionsGameDataChampionSpell> spells;
    std::string banVoPath;
    std::string alias;
    std::string name;
    int32_t id;
    LolChampionsGameDataChampionSpell passive;
    std::vector<LolChampionsGameDataChampionSkin> skins;
    std::string chooseVoPath; 
  };
  inline void to_json(json& j, const LolChampionsGameDataChampion& v) {
    j["stingerSfxPath"] = v.stingerSfxPath; 
    j["squarePortraitPath"] = v.squarePortraitPath; 
    j["roles"] = v.roles; 
    j["spells"] = v.spells; 
    j["banVoPath"] = v.banVoPath; 
    j["alias"] = v.alias; 
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["passive"] = v.passive; 
    j["skins"] = v.skins; 
    j["chooseVoPath"] = v.chooseVoPath; 
  }
  inline void from_json(const json& j, LolChampionsGameDataChampion& v) {
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>(); 
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>(); 
    v.roles = j.at("roles").get<std::vector<std::string>>(); 
    v.spells = j.at("spells").get<std::vector<LolChampionsGameDataChampionSpell>>(); 
    v.banVoPath = j.at("banVoPath").get<std::string>(); 
    v.alias = j.at("alias").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.passive = j.at("passive").get<LolChampionsGameDataChampionSpell>(); 
    v.skins = j.at("skins").get<std::vector<LolChampionsGameDataChampionSkin>>(); 
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>(); 
  }
}