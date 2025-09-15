#Store manager-lnventory Tracking

inventory ={}

#Function to add item
def add_item(name,qty):
  if name in inventory:
     inventory[name]+=qty
   else:
     inventory[name]=qty
   print(f"{qty}{name}(s)added
 successfully!")

#Function to update item
def update_item(name,qty):
  if name in invontory:
     inventory[name]=qty
     print(f"{name} updated to {qty}.")
   else:
      print(f"{name} not fount in invetory.")

#Funtion to delete item
def delete_item(name):
  if name in inventory:
     del inventory[name]
     print(f"{name} removed from inventory.")
   else:
     print(f"{name} nott found!")

#Function to display inventory
def display_inventory():
  print("\n---store inventory---")
  if not inventory:
     print(no items in inventory.")
  else:
    for item,qty in inventory.items():
      print(f"{item}:{qty}")
  print ("-------------------\n")

#Main Menu
while true:
 print("1.Add item")
 print("2.Update item")
 print("3.Delete item")
 print("4.Display inventory")
 print("5.Exit)

 choice = input("Enter your choice:")

 if choice=="1":
    name = input("Enter item name:")
    qty = int(input("Enter quantity:"))
    add_item(name,qty)
  elif choice =="2":
     name = input("Enter item name:")
     qty = int(input("enter new quantity:"))
     update_item(name,qty)
   elif choice=="3":
      name=input("Enter item name:")
      delete_item(name)
   elif choice=="4":
      display_inventory()
   elif choice =="5":
      print("Exiting stor Manager... Goodbye!")
      break
   else:
      print("invalid choice!Try again.") 


 


