# Инструкция по установке и запуска проекта


## Использование в Visual Studio

 Для успешного билда этого проекта у себя в Visual Studio вам потребуется:
 - Установленная Visual Studio
 - Установленный пакет разработки классических приложений на C++ для Visual Studio
   
   ![image](https://user-images.githubusercontent.com/68380831/145350788-1936bae0-9844-454f-993b-8785e084da86.png)

## Инструкция
 Ниже представлена пошаговая инструкция по установке и запуска проекта в Visual Studio в виде разделов.
<details><summary>СОЗДАНИЕ ПРОЕКТА</summary>
<p>


  1. Откройте Visual Studio. 
  2. Первым делом в меню инструментов выберите вкладку `Файл` или `File`
  >![image](https://user-images.githubusercontent.com/68380831/145356159-3a10f56b-d220-4dfd-b359-109d4548f148.png)

  3. В открывшейся вкладке, наведясь на пункт `Создать` или `New`, в выпадающем меню нажмите на `Проект...` или `Project...`
  >![image](https://user-images.githubusercontent.com/68380831/145361396-844ce359-ee94-45b4-99a9-9a4e107e46a6.png)

  4. В открывшемся окне, путём прокрутки или поисковой строки, найдите `Пустой проект` или `Empty Project` c тегами [`C++` `Windows` `Console`] и нажмите `Далее` или `Continue`
  > ![image](https://user-images.githubusercontent.com/68380831/145358317-2be512c7-9004-4ee2-a59f-0cdda6f4e994.png)

  5. В открывшимся окне укажите название проекта в графе `Имя проекта` или `Project name` и расположение проекта в графе `Расположение` или `Location`, после чего нажмите `Создать` или `Create`
  >![image](https://user-images.githubusercontent.com/68380831/145359420-827d06cd-d87d-4800-8b04-fa282068c993.png)

</p>
</details>
<details><summary>ПЕРЕНОС ФАЙЛОВ ИЗ РЕПОЗИТОРИЯ В ЛОКАЛЬНЫЙ ПРОЕКТ</summary>
<p>


  1. Первым делом нам нужно открыть папку проекта, для этого: В окне `Обозреватель решений` или `Solution Explorer` наведитесь на свой проект
  >![image](https://user-images.githubusercontent.com/68380831/145360875-d8e4fb4b-e041-43e6-85be-90ab1c608dc3.png)
  
  2. После чего, нажмите правой кнопкой мыши по названию проекта и в выпадающем меню, выберите пункт `Открыть папку в проводнике` или `Open Folder in File Explorer`
  >![image](https://user-images.githubusercontent.com/68380831/145360970-95cddf9d-4d9a-464b-9ff9-43263947dd6b.png)
  
  3. Открываем проект на github, нажимаем на клавишу Code и в выпадающем меню нажимаем на клавишу Download ZIP
  >![image](https://user-images.githubusercontent.com/68380831/145364797-6a4816e9-8881-47e9-b6aa-e711fa811c6d.png)

  4. В только что скачанном .zip архиве мы проходим в дирикторию с названием спускаемся в папку на уровне с которой находятся файлы `README.md` и `.gitignore`
  >![image](https://user-images.githubusercontent.com/68380831/145367735-6ee8e52e-79f6-4e85-ace3-a0c126c2bb3e.png)

  5. Далее нужно перенести все файлы из только что открой папки (пункт 3) в дирикторию проекта (пункт 1)
  >![image](https://user-images.githubusercontent.com/68380831/145368170-779455ff-5e81-407d-a356-61b4ff04136e.png)

  6. После этого в открытом проекте в Visual Studio нужно нажать `Проект` или `Project` и в выпадающем меню выбрать `Добавить существующий элемент...` или `Add existing file...`
  >![image](https://user-images.githubusercontent.com/68380831/145368707-b21af8a7-a3fb-481e-9b95-c99e9bf4b0fa.png)

  7. В открывшемся окне нужно, зажав клавшу `CTRL`, нажать левой кнопкой мыши по всем файлам, которые мы переносили (пункт 4), после чего нажать добавить
  >![image](https://user-images.githubusercontent.com/68380831/145369029-dbac8984-34f5-46e8-901f-394704fca92c.png)

</p>
</details>
</p>
</details>
<details><summary>ЗАПУСК ПРОЕКТА</summary>
<p>


 1. Для начала нужно открыть файл, содержащийся в себе функцию вида:
```c++
int main() {
  // код
}
```
  >![image](https://user-images.githubusercontent.com/68380831/145371330-f92b64d3-f9d1-4273-a764-be13218588db.png)

   _P.S._: Зачастую, этим файлом будет являться `main.cpp`, однако, для удобства, в `README.md` репозитория проекта будет указано название этого файла.
  
  2. В меню инструментов выберите пункт `Отладка` или `Debug`  и в выпадающем меню нажмите на пункт `Начать отладку` или `Start Debugging`
  > ![image](https://user-images.githubusercontent.com/68380831/145371740-66a3ff5d-c3fe-4356-a0d0-7fff38a2fbd6.png)

</p>
</details>






